   M S B A M L   `   `   `  ����L  HWPF_MovingObjects, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null5clr-namespace:WPF_MovingObjectsWPF_MovingObjects  5   	   "    WPF_MovingObjects.MainWindow   5   	   \ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    5   	   R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   1localclr-namespace:WPF_MovingObjects     5   	     � Title$  
MainWindow��5   	   $	��600��6   $	��800��6)   .��5	      �� -   5         ��Name$
 Tabs��5	       �� TabStripPlacement$	 Top=�6   .@�5
   
   ��  �� 
IsSelected . $��Canvas��6$   .��5      �� -   5         ��Name$ FieldCanvas��5       J� 	AllowDrop . 
�������.+�5      o� $��25��6   $	��Top=�6#   .@�5      m� -   5        $
��Move��5      6-   m� 5      -   5        $��Rotate��5      6/   m� 5      -   5        $��Resize��5      6/   5      5      5      �� 5   
   $
��Grid��6   .��5      �� $
��Auto=�6   .��5      � -   5         �Name$ 	FieldGrid��5       � ShowGridLines . 
������� � ColumnDefinitions 5      �� 5      5      5      5      5      5      