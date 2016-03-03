object TForm2: TTForm2
  Left = 0
  Top = 0
  Caption = 'Kokosov'#233' kreslen'#237
  ClientHeight = 555
  ClientWidth = 703
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 529
    Height = 281
    Color = 5554813
    TabOrder = 0
    object Image1: TImage
      Left = 0
      Top = 24
      Width = 517
      Height = 252
      OnMouseDown = Image1MouseDown
      OnMouseMove = Image1MouseMove
      OnMouseUp = Image1MouseUp
    end
    object Label1: TLabel
      Left = 8
      Top = 0
      Width = 57
      Height = 24
      Caption = 'Image'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 282
    Width = 529
    Height = 273
    Color = 8454143
    TabOrder = 1
    object PaintBox1: TPaintBox
      Left = 0
      Top = 30
      Width = 517
      Height = 241
      OnMouseDown = PaintBox1MouseDown
      OnMouseMove = PaintBox1MouseMove
      OnMouseUp = PaintBox1MouseUp
    end
    object Label2: TLabel
      Left = 8
      Top = 0
      Width = 78
      Height = 24
      Caption = 'PaintBox'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
  end
  object Panel3: TPanel
    Left = 523
    Top = 0
    Width = 185
    Height = 555
    Color = 16777088
    TabOrder = 2
    object Barva: TLabel
      Left = 32
      Top = 125
      Width = 28
      Height = 13
      Caption = 'Barva'
    end
    object SirkaCary: TLabeledEdit
      Left = 32
      Top = 40
      Width = 105
      Height = 21
      EditLabel.Width = 47
      EditLabel.Height = 13
      EditLabel.Caption = #352#237#345'ka '#269#225'ry'
      TabOrder = 0
      Text = '0'
    end
    object ColorListBox1: TColorListBox
      Left = 32
      Top = 144
      Width = 121
      Height = 369
      ItemHeight = 16
      TabOrder = 1
    end
    object UpDown1: TUpDown
      Left = 137
      Top = 40
      Width = 16
      Height = 21
      Associate = SirkaCary
      Min = 1
      Position = 1
      TabOrder = 2
    end
  end
end
