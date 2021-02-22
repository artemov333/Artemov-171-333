object dm: Tdm
  OldCreateOrder = False
  Height = 455
  Width = 549
  object FDConnection1: TFDConnection
    Params.Strings = (
      
        'Database=C:\Users\user\Documents\projradstudio\DetSad\MESSAGES.F' +
        'DB'
      'CharacterSet=UTF8'
      'User_Name=SYSDBA'
      'Password=masterkey'
      'DriverID=FB')
    Connected = True
    Left = 48
    Top = 56
  end
  object FDQuery1: TFDQuery
    Connection = FDConnection1
    Left = 184
    Top = 80
  end
  object queryVisits: TFDQuery
    Active = True
    Connection = FDConnection1
    SQL.Strings = (
      'select '
      'c.day_visit,'
      'c.in_hour,'
      'c.in_minutes,'
      'c.out_hour,'
      'c.out_minutes'
      'from visits c')
    Left = 240
    Top = 88
  end
  object procSendMess: TFDStoredProc
    Connection = FDConnection1
    StoredProcName = 'SEND_MESSAGE'
    Left = 256
    Top = 208
    ParamData = <
      item
        Position = 1
        Name = 'NUMBER'
        DataType = ftInteger
        ParamType = ptInput
      end
      item
        Position = 2
        Name = 'ID_PARENT'
        DataType = ftInteger
        ParamType = ptInput
      end
      item
        Position = 3
        Name = 'ID_TEACHER'
        DataType = ftInteger
        ParamType = ptInput
      end
      item
        Position = 4
        Name = 'NOTE'
        DataType = ftWideString
        ParamType = ptInput
        Size = 255
      end>
  end
  object FDGUIxWaitCursor1: TFDGUIxWaitCursor
    Provider = 'FMX'
    Left = 48
    Top = 392
  end
  object FDPhysFBDriverLink1: TFDPhysFBDriverLink
    Left = 112
    Top = 384
  end
end
