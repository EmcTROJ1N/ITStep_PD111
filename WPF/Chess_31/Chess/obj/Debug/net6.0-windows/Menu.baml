   M S B A M L   `   `   `  ����@  <Chess, Version=1.0.0.0, Culture=neutral, PublicKeyToken=nullclr-namespace:ChessChess  5   	       
Chess.Menu   5   	   W SPresentationCore, Version=6.0.2.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=6.0.2.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=6.0.2.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=6.0.2.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5   	   R NSystem.Xaml, Version=6.0.2.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   %localclr-namespace:Chess     5   	     � Title$
  Menu��5   	   $	��500��6   $	��800��6#    � Icon$ 	/icon.png��6/   .��5
      � ��5   
   �� 5       �� ImageSource$ Resource/bg.jpg��6    � ColumnDefinitions 5   
   �� 5      $��1* �6   �� 5      $��2* �6   �� 5      $��1* �6    � RowDefinitions 5   
   �� 5      $��2* �6   �� 5      �� 5      �� 5      .+�5   
   r� -   5         r�Name$ Player��5   ,    r� Source$ MenuOst.mp3?�6   6<   �� 5   
   -   5        $��1��5      $��1��6!      shadowButtonTemplate#��[  6.   $��20(�6_   $��Book Antiqua)�6n   $��10q�6�   $��Новая игра��6�   6�   �� 5   
   -   5        $��1��5      $��2��6!   #��[  6.   $��20(�6_   $��Book Antiqua)�6n   $��10q�6�   $:��4Продолжить сохраненную игру��6�   6�   �� 5    
   -   5        $��1��5       $��3��6!   #��[  6.   $��20(�6_   $��Book Antiqua)�6n   $��10q�6�   $��Настройки��6�   6�   5"      5#      