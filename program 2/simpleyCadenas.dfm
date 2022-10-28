object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 350
  ClientWidth = 861
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 48
    Top = 30
    Width = 75
    Height = 25
    Caption = 'potencia'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 184
    Top = 32
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 184
    Top = 59
    Width = 121
    Height = 21
    TabOrder = 2
    Text = 'Edit2'
  end
  object Button2: TButton
    Left = 17
    Top = 61
    Width = 161
    Height = 25
    Caption = 'Mayo digito de un numero'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 48
    Top = 92
    Width = 75
    Height = 25
    Caption = 'suma de digitos'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 34
    Top = 123
    Width = 89
    Height = 25
    Caption = 'eliminar digito z'
    TabOrder = 5
    OnClick = Button4Click
  end
  object Edit3: TEdit
    Left = 184
    Top = 92
    Width = 121
    Height = 21
    TabOrder = 6
    Text = 'edit3'
  end
  object Button5: TButton
    Left = 48
    Top = 154
    Width = 75
    Height = 25
    Caption = 'MFinal'
    TabOrder = 7
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 184
    Top = 136
    Width = 75
    Height = 25
    Caption = 'C.Vocales'
    TabOrder = 8
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 184
    Top = 167
    Width = 75
    Height = 25
    Caption = 'Inv.Cadena'
    TabOrder = 9
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 256
    Top = 167
    Width = 75
    Height = 25
    Caption = 'k=n-2'
    TabOrder = 10
  end
  object StringGrid1: TStringGrid
    Left = 352
    Top = 59
    Width = 320
    Height = 27
    ColCount = 1
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    TabOrder = 11
  end
end
