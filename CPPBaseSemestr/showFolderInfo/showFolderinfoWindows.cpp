#include <iostream>
#include <io.h>

using namespace std;

void ShowFolder(const char* folder_path, const char* mask)
{
	// переменная, хранящая информацию об одном файле
	_finddata_t c_file;

	int size = 0;
	int count = 0;

	// адрес списка найденных файлов
	long hFile;

	// полный путь к папке с маской
	char path[200];

	strcpy(path, folder_path);
	strcat(path, "\\");
	strcat(path, mask);

	// найти файлы по маске и вернуть адрес списка найденных файлов и информацию о первом файле
	hFile = _findfirst(path, &c_file);

	if (hFile != -1)
	{
		// если файл является папкой
		if (c_file.attrib & _A_SUBDIR)
		{
			if (strcmp(c_file.name, ".") != 0 && strcmp(c_file.name, "..") != 0)
			{
				char new_path[200];
				strcpy(new_path, folder_path);
				strcat(new_path, "\\");
				strcat(new_path, c_file.name);

				cout << "<DIR>\t" << new_path << endl;

				// рекурсивный вызов функции
				ShowFolder(new_path, mask);
			}
		}
		else
		{
			cout << c_file.name << "   " << c_file.size << endl;
		}
		// цикл для получения информации об остальных найденных файлах
		while (_findnext(hFile, &c_file) == 0)
		{
			if (c_file.attrib & _A_SUBDIR)
			{
				if (strcmp(c_file.name, ".") != 0 && strcmp(c_file.name, "..") != 0)
				{
					char new_path[200];
					strcpy(new_path, folder_path);
					strcat(new_path, "\\");
					strcat(new_path, c_file.name);

					cout << "<DIR>\t" << new_path << endl;

					// рекурсивный вызов функции
					ShowFolder(new_path, mask);
				}
			}
			else
			{
				char file_path[200];
				strcpy(file_path, folder_path);
				strcat(file_path, "\\");
				strcat(file_path, c_file.name);

				cout << "\t" << file_path << "   " << c_file.size << endl;
			}
		}

		// освободить память от списка найденных файлов
		_findclose(hFile);
	}
}

int main()
{
	ShowFolder("c:\\F1", "*.*");
    return 0;
}

