//ODI Message
#pragma region display messages


//ODIEvent TX
namespace ODIEvent_LS_APA
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90AC00BB;//10AC00BB, 4 data byte
		static const int Cycle_time = 0;
	};

	class EventID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 6;
		static const int Initial_Value = 0;
	};

	class FUClass
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class MultiFrameReturnChannel
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

namespace ODIEvent_ECC
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90AC0099;
		static const int Cycle_time = 0;
	};

	class FUClass
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class EventID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 6;
		static const int Initial_Value = 0;
	};

	class MultiFrameReturnChannel
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}


//ODIIndication TX
namespace ODIIndication_LS_APA
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90ACA0BB;//10ACA0BB
		static const int Cycle_time = 0;
	};

	class ODII_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd30
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd36
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace ODIIndication_BCM
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90ACA040;
		static const int Cycle_time = 0;
	};

	class ODII_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd30
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace ODIIndication_Centerstack
{
	class Basic
	{
	public:
		static const int Message_ID = 0x579;
		static const int Cycle_time = 0;
	};

	class ODII_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd30
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace ODIIndication_ECC
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90ACA099;
		static const int Cycle_time = 0;
	};

	class ODII_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd30
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace ODIIndication_UPA_APA
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90ACA0BB;
		static const int Cycle_time = 0;
	};

	class ODII_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd30
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODII_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODII_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace ODIIndication_Onstar_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x5A0;
		static const int Cycle_time = 0;
	};

	class ODIIOnstar_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDIIOnstar_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnStar_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd36
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd30
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

namespace ODIIndication_IPC_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90ACE060;
		static const int Cycle_time = 0;
	};

	class ODII_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODII_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd30
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODII_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd36
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODII_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}


//ODIDynamicData TX
namespace ODIDynamicData_LS_APA
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90B020BB;///10B020BB
		static const int Cycle_time = 0;
	};

	class Invalid_Data
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class Data_Type
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 6;
		static const int Initial_Value = 0;
	};

	class FUClass
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class Data_ID
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class Data_Value
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 32;
		static const int Initial_Value = 0;
	};
}

namespace ODIDynamicData_ECC
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90B02099;
		static const int Cycle_time = 0;
	};

	class FUClass
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class Invalid_Data
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class Data_Type
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 6;
		static const int Initial_Value = 0;
	};

	class Data_ID
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class Data_Value
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 32;
		static const int Initial_Value = 0;
	};
}


//ODIAction RX
namespace ODIAction_CntrStack_LS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90AD6080;//10AD6080
		static const int Cycle_time = 0;
	};

	class DataType
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 6;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Speed = 0x00,
			String = 0x01,
			Integer = 0x02,
			EnumerationValue = 0x03,
			Decimal = 0x04,
			Time = 0x05,
			Date = 0x06,
			List = 0x07,
			Pictogram = 0x08,
			TextId = 0x09,
			BitmapId = 0x0A,
			DistanceLong = 0x0B,
			DistanceShort = 0x0C,
			Volume = 0x0D,
			Temperature = 0x0E,
			Pressure = 0x0F,
			Fuel_Consumption = 0x10,
			Fuel_Consumption_Inverted = 0x11,
			Character = 0x12,
			HoursOfDay = 0x13,
			DecimalShort = 0x14,
			Bitmap = 0x15,
		};
	};

	class FUClassID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ActionID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class DisplayMaskID
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			IPC = 0x01,
			Centerstack = 0x02,
			AuxIP = 0x04,
			RearDisplayOne = 0x08,
			RearDisplayTwo = 0x10,
			OTIM = 0x20,
			Reserved = 0x40,
			//Reserved = 0x80,

		};
	};

	class ActionValue
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 32;
		static const int Initial_Value = 0;
	};
}

namespace ODIAction_ECC
{
	class Basic
	{
	public:
		static const int Message_ID = 0x577;
		static const int Cycle_time = 0;
	};

	class ODIAECC_DaTy
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 6;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Speed = 0x00,
			String = 0x01,
			Integer = 0x02,
			EnumerationValue = 0x03,
			Decimal = 0x04,
			Time = 0x05,
			Date = 0x06,
			List = 0x07,
			Pictogram = 0x08,
			TextId = 0x09,
			BitmapId = 0x0A,
			DistanceLong = 0x0B,
			DistanceShort = 0x0C,
			Volume = 0x0D,
			Temperature = 0x0E,
			Pressure = 0x0F,
			Fuel_Consumption = 0x10,
			Fuel_Consumption_Inverted = 0x11,
			Character = 0x12,
			HoursOfDay = 0x13,
			DecimalShort = 0x14,
			Bitmap = 0x15,
		};
	};

	class ODIAECC_FUCID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIAECC_ActnID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIAECC_DspMID
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			IPC = 0x01,
			Centerstack = 0x02,
			AuxIP = 0x04,
			RearDisplayOne = 0x08,
			RearDisplayTwo = 0x10,
			ECC = 0x20,
			Info_Faceplate = 0x40,
			ECC_Faceplate = 0x80,

		};
	};

	class ODIAECC_ActnVal
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 32;
		static const int Initial_Value = 0;
	};
}

namespace ODIAction_Info_Faceplate
{
	class Basic
	{
	public:
		static const int Message_ID = 0x56A;
		static const int Cycle_time = 0;
	};

	class ODIAIF_DaTy
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 6;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Speed = 0x00,
			String = 0x01,
			Integer = 0x02,
			EnumerationValue = 0x03,
			Decimal = 0x04,
			Time = 0x05,
			Date = 0x06,
			List = 0x07,
			Pictogram = 0x08,
			TextId = 0x09,
			BitmapId = 0x0A,
			DistanceLong = 0x0B,
			DistanceShort = 0x0C,
			Volume = 0x0D,
			Temperature = 0x0E,
			Pressure = 0x0F,
			Fuel_Consumption = 0x10,
			Fuel_Consumption_Inverted = 0x11,
			Character = 0x12,
			HoursOfDay = 0x13,
			DecimalShort = 0x14,
			Bitmap = 0x15,
		};
	};

	class ODIAIF_FUCID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIAIF_ActnID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIAIF_DspMID
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			IPC = 0x01,
			Centerstack = 0x02,
			AuxIP = 0x04,
			RearDisplayOne = 0x08,
			RearDisplayTwo = 0x10,
			ECC = 0x20,
			Info_Faceplate = 0x40,
			ECC_Faceplate = 0x80,

		};
	};

	class ODIAIF_ActnVal
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 32;
		static const int Initial_Value = 0;
	};
}

namespace ODIAction_IPC_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x56C;
		static const int Cycle_time = 0;
	};

	class ODIAI_ActnID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIAI_ActnVal
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 32;
		static const int Initial_Value = 0;
	};

	class ODIAI_DaTy
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 6;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Speed = 0x00,
			String = 0x01,
			Integer = 0x02,
			EnumerationValue = 0x03,
			Decimal = 0x04,
			Time = 0x05,
			Date = 0x06,
			List = 0x07,
			Pictogram = 0x08,
			TextId = 0x09,
			BitmapId = 0x0A,
			DistanceLong = 0x0B,
			DistanceShort = 0x0C,
			Volume = 0x0D,
			Temperature = 0x0E,
			Pressure = 0x0F,
			Fuel_Consumption = 0x10,
			Fuel_Consumption_Inverted = 0x11,
			Character = 0x12,
			HoursOfDay = 0x13,
			DecimalShort = 0x14,
			Bitmap = 0x15

		};
	};

	class ODIAI_DspMID
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			IPC = 0x01,
			Centerstack = 0x02,
			AuxIP = 0x04,
			RearDisplayOne = 0x08,
			RearDisplayTwo = 0x10,
			ECC = 0x20,
			Info_Faceplate = 0x40,
			ECC_Faceplate = 0x80

		};
	};

	class ODIAI_FUCID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}


//ODIDynDataMultiReq RX
namespace ODIDynDataMultiReq_IPC_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x574;
		static const int Cycle_time = 0;
	};

	class ODDMI_DataID2Vld
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDMI_DataID3Vld
	{
	public:
		static const int Start_Bit = 1;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDMI_DataID4Vld
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDMI_DataID5Vld
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDMI_ReqType
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Subscribe = 0x00,
			Unsubscribe = 0x01
		};
	};

	class ODDMI_FUCID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMI_DispMID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			IPC = 0x01,
			Centerstack = 0x02,
			AuxIP = 0x04,
			RearDisplayOne = 0x08,
			RearDisplayTwo = 0x10,
			OTIM = 0x20,
			Info_Faceplate = 0x40,
			Reserved = 0x80
		};
	};

	class ODDMI_DataID1
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMI_DataID2
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMI_DataID3
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMI_DataID4
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMI_DataID5
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

}


//ODIEnumDynamicData TX
namespace ODIEnumDynamicData_BCM
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90AEC040;
		static const int Cycle_time = 0;
	};

	class ODIEDD_Data11Value
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data1Value
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data10Value
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data12Value
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data13Value
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data14Value
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data15Value
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data16Value
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data17Value
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data18Value
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data2Value
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data3Value
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data4Value
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data5Value
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data6Value
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data7Value
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data8Value
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data9Value
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_FUCID
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

namespace ODIEnumDynamicData_Centerstack
{
	class Basic
	{
	public:
		static const int Message_ID = 0x57D;
		static const int Cycle_time = 0;
	};

	class ODIEDD_FUCID
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data1Value
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data2Value
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data3Value
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data4Value
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data5Value
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data6Value
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data7Value
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data8Value
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data9Value
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data10Value
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data11Value
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data12Value
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data13Value
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data14Value
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data15Value
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data16Value
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data17Value
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data18Value
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};
}

namespace ODIEnumDynamicData_UPA_APA
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90AEC0BB;
		static const int Cycle_time = 0;
	};

	class ODIEDD_Data1Value
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data2Value
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data3Value
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data4Value
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data5Value
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data6Value
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data7Value
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data8Value
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data9Value
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data10Value
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};


	class ODIEDD_Data11Value
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data12Value
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data13Value
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data14Value
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data15Value
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data16Value
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};


	class ODIEDD_Data17Value
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data18Value
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_FUCID
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

namespace ODIEnumDynamicData_IPC_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90AFC060;
		static const int Cycle_time = 0;
	};

	class ODIEDD_FUCID
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data11Value
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data1Value
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data10Value
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data12Value
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data13Value
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data14Value
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data15Value
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data16Value
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data17Value
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data18Value
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data2Value
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data3Value
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data4Value
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data5Value
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data6Value
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data7Value
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data8Value
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data9Value
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};
}

namespace ODIEnumDynamicData_ECC
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90AEC099;
		static const int Cycle_time = 0;
	};

	class ODIEDD_Data11Value
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data1Value
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data10Value
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data12Value
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data13Value
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data14Value
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data15Value
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data16Value
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data17Value
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data18Value
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data2Value
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data3Value
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data4Value
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data5Value
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data6Value
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data7Value
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data8Value
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data9Value
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_FUCID
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

#pragma endregion



//IPC_LS TX 0x60
#pragma region IPC_LS messages

//power mode backup
namespace System_Power_Mode_Backup_LS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90244060;//0x10244060
		static const int Cycle_time = 5000;
	};
	class SysBkUpPwrMd
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Off = 0x0,
			Accessory = 0x1,
			Run = 0x2,
			Crank_Request = 0x3
		};
	};
	class SysBkupPwrMdEn
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			False = 0x0,
			True = 0x1
			
		};
	};
	class SysBkUpPwrMdV
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid = 0x0,
			Invalid = 0x1
		};
	};
}

#pragma endregion



//BCM_LS TX 0x40
#pragma region BCM_LS messages

//power mode
namespace System_Power_Mode_LS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90242040;//0x10242040
		static const int Cycle_time = 5000;
	};

	class SysPwrMd
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Off = 0x0,
			Accessory = 0x1,
			Run = 0x2,
			Crank_Request = 0x3
		};
	};

	class SysPwrMdV
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid = 0x0,
			Invalid = 0x1
		};
	};

	class KylsStrtAuthRq
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			False = 0x0,
			True = 0x1
		};
	};
}

//contain vehicle move state
namespace Power_Mode_Info_LS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90754040;//0x10754040
		static const int Cycle_time = 0;
	};

	class Ky_IdDevPr
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			False = 0,
			True = 1
		};
	};

	class VehMovState
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 3;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Parked = 0,
			Neutral = 1,
			Forward = 2,
			Reverse = 3,
			Invalid = 4
		};
	};
}

//Driver Door status
namespace Driver_Door_Status
{
	class Basic
	{
	public:
		static const int Message_ID = 0x8C630040;//0x0C630040
		static const int Cycle_time = 0;
	};

	class DDAjrSwAtv
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			False = 0,
			True = 1
		};
	};

	class LftglsAjrSwAct
	{
	public:
		static const int Start_Bit = 1;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			False = 0,
			True = 1
		};
	};

	class LftglsRelSwAct
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			False = 0,
			True = 1
		};
	};

	class DDAjrSwAtvM
	{
	public:
		static const int Start_Bit = 7;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			DontUseData = 0,
			UseData = 1
		};
	};
}

//Passenger Door Status
namespace Passenger_Door_Status_LS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x8C2F6040;//0X0C2F6040
		static const int Cycle_time = 0;
	};

	class PDAjrSwAtv
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			False = 0,
			True = 1
		};
	};
}

//Left Rear Door Status
namespace Left_Rear_Door_Status
{
	class Basic
	{
	public:
		static const int Message_ID = 0x8C2F8040;//0X0C2F8040
		static const int Cycle_time = 0;
	};

	class RLDoorAjarSwAct
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			False = 0,
			True = 1
		};
	};
}

//Right Rear Door Status
namespace Right_Rear_Door_Status
{
	class Basic
	{
	public:
		static const int Message_ID = 0x8C2FA040;//0X0C2FA040
		static const int Cycle_time = 0;
	};

	class RRDoorAjarSwAct
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			False = 0,
			True = 1
		};
	};
}

//Vectra Specific Network Management
namespace VNMF_LS_621_BCM
{
	class Basic
	{
	public:
		static const int Message_ID = 0x621;
		static const int Cycle_time = 1000;
	};

	class VectraSpcNWMgtD_Byte0
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class VectraSpcNWMgtD_Byte1
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class VectraSpcNWMgtD_Byte2
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class VectraSpcNWMgtD_Byte3
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class VectraSpcNWMgtD_Byte4
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class VectraSpcNWMgtD_Byte5
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class VectraSpcNWMgtD_Byte6
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class VectraSpcNWMgtD_Byte7
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

//engine information
namespace Engine_Information_1_LS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x902CA040;//0X102CA040
		static const int Cycle_time = 100;
	};

	class Engine_Information_1_LS_Byte0
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class Engine_Information_1_LS_Byte1
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class Engine_Information_1_LS_Byte2
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class Engine_Information_1_LS_Byte3
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class Engine_Information_1_LS_Byte4
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class Engine_Information_1_LS_Byte5
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class Engine_Information_1_LS_Byte6
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class Engine_Information_1_LS_Byte7
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

//Vehicle_Speed_Information
namespace Vehicle_Speed_Information
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90210040;//0x10210040
		static const int Cycle_time = 100;
	};

	class VehSpdAvgDrvnV
	{
	public:
		static const int Start_Bit = 7;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid = 0x00,
			Invalid = 0x01
		};
	};

	class VehSpdAvgDrvn
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 15;
		static const int Initial_Value = 0;
		///factor=0.015625
	};

	class VehSpdAvgDrvnSrc
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Transmission_Output_Speed = 0x00,
			Wheel_Speed = 0x01
		};
	};

	class VehSpdAvgNDrvnV
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid = 0x00,
			Invalid = 0x01
		};
	};

	class VehSpdAvgNDrvn
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 15;
		static const int Initial_Value = 0;
	};

	class DistRollCntAvgDrvnSrc
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Transmission_Output_Speed = 0x00,
			Wheel_Speed = 0x01
		};
	};
}

#pragma endregion



//Chime Function
#pragma region chime messages
namespace Chime_Active
{
	class Basic
	{
	public:
		static const int Message_ID = 0x9040A080;
		static const int Cycle_time = 0;
	};
	class ChmAct
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;

	};

	class ChmVolSt
	{
	public:
		static const int Start_Bit = 1;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Normal = 0,
			Loud = 1
		};
	};
}

namespace Chime_Command
{
	class Basic
	{
	public:
		static const int RadioHead = 0x90400080;
		static const int APA_LS = 0x904000BB;
		static const int BCM = 0x90400040;
		static const int IPC = 0x90400060;
		static const int Onstar = 0x90400097;
		static const int SDM = 0x90400058;
		static const int Cycle_time = 0;
	};

	class SC_SndTne
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Clock = 0x00,
			Clack = 0x01,
			Click = 0x02,
			Click_Clack = 0x03,
			Beep_1 = 0x04,
			Beep_2 = 0x05,
			Gong_1 = 0x06,
			Gong_2 = 0x07,
			Harp = 0x08,
			High_Frequency_Broadband = 0x09,
			Beep_Radio_Source_Muted_750 = 0x0A,
			Beep_Radio_Source_Muted_2000 = 0x0B,
			Gong_Radio_Source_Muted_750 = 0x0C,
			Gong_Radio_Source_Muted_2000 = 0x0D,
			No_Chime_with_Radio_Source_Muted = 0x0E
		};
	};

	class SndLocRtRr
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class SndLocLftRr
	{
	public:
		static const int Start_Bit = 5;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class SndLocPasFr
	{
	public:
		static const int Start_Bit = 6;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class SndLocDrFr
	{
	public:
		static const int Start_Bit = 7;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class SC_SndCdnPrd
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class SC_NmofRp
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class SC_SndDutCyc
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class SndPriority
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

#pragma endregion



//FacePlate
namespace ODIEvent_Info_Faceplate
{
	class Basic
	{
	public:
		static const int Message_ID = 0x560;
		static const int Cycle_time = 0;
	};



	class ODIEIF_EvID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 6;
		static const int Initial_Value = 0;
	};

	class ODIEIF_FUCID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIEIF_MultiFrRetCh
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

}

namespace ODIIndication_Info_Faceplate
{
	class Basic
	{
	public:
		static const int Message_ID = 0x59A;
		static const int Cycle_time = 0;
	};

	class ODIIIF_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd1
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd10
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd11
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd12
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd13
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd14
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd15
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd16
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd17
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd18
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd19
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd2
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd20
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd21
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd22
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd23
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd24
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd25
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd26
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd27
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd28
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd29
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd3
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd30
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODIIIF_ODIInd31
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd33
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd34
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd35
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd36
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd37
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd38
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd39
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODIIIF_ODIInd4
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd40
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd41
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd42
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd43
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd44
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd45
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd46
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd47
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd48
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd49
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd5
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd50
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODIIIF_ODIInd51
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd52
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd53
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd54
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd56
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd6
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd7
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODIIIF_ODIInd8
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd9
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace ODIDynDataMultiReq_Inf_Faceplate
{
	class Basic
	{
	public:
		static const int Message_ID = 0x572;
		static const int Cycle_time = 0;
	};

	class ODDMIF_DataID5
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID5Vld
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			True = 0x01,
			False = 0x02

		};
	};

	class ODDMIF_DataID4
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID4Vld
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			True = 0x01,
			False = 0x02

		};
	};

	class ODDMIF_DataID1
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID3
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID3Vld
	{
	public:
		static const int Start_Bit = 1;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID2
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID2Vld
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DispMID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			IPC = 0x01,
			Centerstack = 0x02,
			AuxIP = 0x04,
			RearDisplayOne = 0x08,
			RearDisplayTwo = 0x10,
			OTIM = 0x20,
			Info_Faceplate = 0x40,
			Reserved = 0x80


		};
	};

	class ODDMIF_ReqType
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Subscribe = 0x00,
			Unsubscribe = 0x01
		};
	};

}

namespace ODIEnumDynamicData_Inf_Faceplate
{
	class Basic
	{
	public:
		static const int Message_ID = 0x565;
		static const int Cycle_time = 0;
	};

	class ODIEDDIF_Data5Value
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data1Value
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data10Value
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};


	class ODIEDDIF_Data11Value
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data12Value
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data13Value
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data14Value
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data15Value
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data16Value
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data17Value
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data18Value
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data2Value
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data3Value
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data4Value
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data6Value
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data7Value
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data8Value
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data9Value
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_FUCID
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}



//Temperature
namespace PPEI_Engine_Environmental_Status
{
	class Basic
	{
	public:
		static const int Message_ID = 0x3FC;
		static const int Cycle_time = 0;
	};


	class OtsAirTmp
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class OtsAirTmpCrVal
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class OtsAirTmpCrValMsk
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Dont_Use_Data=0x00,
			Use_Data=0x01
		};
	};

	class OtsAirTmpCrValV
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};

	class OtsAirTmpV
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};
}



//Oil
namespace PPEI_Engine_General_Status_5
{
	class Basic
	{
	public:
		static const int Message_ID = 0x4D1;
		static const int Cycle_time = 500;
	};

	class FlLvlPct
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class FlLvlPctV
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};
}

namespace PPEI_Vehicle_Speed_and_Distance
{
	class Basic
	{
	public:
		static const int Message_ID = 0x3E9;
		static const int Cycle_time = 100;
	};

	class DistRollCntAvgDrvnSrc
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Transmission_Output_Speed=0x00,
			Wheel_Speed=0x01
		};
	};

	class VehSpdAvgDrvn
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 15;
		static const int Initial_Value = 0;
	};

	class VehSpdAvgDrvnSrc
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Transmission_Output_Speed=0x00,
			Wheel_Speed=0x01
		};
	};

	class VehSpdAvgDrvnV
	{
	public:
		static const int Start_Bit = 7;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};

	class VehSpdAvgNDrvn
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 15;
		static const int Initial_Value = 0;
	};

	class VehSpdAvgNDrvnV
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};
}

namespace PPEI_VIN_Digits_10_to_17
{
	class Basic
	{
	public:
		static const int Message_ID = 0x4E1;
		static const int Cycle_time = 1000;
	};

	class VehIdNmDig10_17
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 64;
		static const int Initial_Value = 0;
	};

}

namespace PPEI_NonDrivn_Whl_Rotationl_Stat
{
	class Basic
	{
	public:
		static const int Message_ID = 0x0C5;
		static const int Cycle_time = 0;
	};

	class WRSLNDWhlDisTpRC
	{
	public:
		static const int Start_Bit = 6;
		static const int Length = 2;
		static const int Initial_Value = 0;
	};
}

namespace PPEI_Engine_General_Status_1
{
	class Basic
	{
	public:
		static const int Message_ID = 0x0C9;
		static const int Cycle_time = 0;
	};

	class EngRunAtv
	{
	public:
		static const int Start_Bit = 7;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}



namespace USDT_Req_to_RadioHead_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x248;
		static const int Cycle_time = 0;
	};

	class DgnInf
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 64;
		static const int Initial_Value = 0;
	};

}

namespace USDT_Req_to_All_HS_ECUs
{
	class Basic
	{
	public:
		static const int Message_ID = 0x101;
		static const int Cycle_time = 0;
	};

	class DgnInf
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 64;
		static const int Initial_Value = 0;
	};
}





//AirBag Function Message
namespace Airbag_Impact_Data
{
	class Basic
	{
	public:
		static const int Message_ID = 0x190;
		static const int Cycle_time = 0;
	};
	class SIRDpl
	{
	public:
		static const int Start_Bit = 1;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

}

namespace Airbag_Status
{
	class Basic
	{
	public:
		static const int Message_ID = 0x192;
		static const int Cycle_time = 2000;
	};

	class EvntEnbld
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class SftyMuteRd
	{
	public:
		static const int Start_Bit = 5;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

}

//Node
namespace Node_Present_Onstar
{
	class Basic
	{
	public:
		static const int Message_ID = 0x629;
		static const int Cycle_time = 1000;
	};

	class OnstarPr
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 1;
	};
}

namespace Node_Present_APA_UPA
{
	class Basic
	{
	public:
		static const int Message_ID = 0x639;
		static const int Cycle_time = 1000;
	};

	class APAPr
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 1;
	};
}

namespace Node_Present_SDM
{
	class Basic
	{
	public:
		static const int Message_ID = 0x627;
		static const int Cycle_time = 1000;
	};

	class SDMPr
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 1;
	};
}

namespace Node_Present_ECC
{
	class Basic
	{
	public:
		static const int Message_ID = 0x633;
		static const int Cycle_time = 1;
	};

	class ECCPr
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 1;
	};
}

namespace Node_Present_Info_Faceplate
{
	class Basic
	{
	public:
		static const int Message_ID = 0x63F;
		static const int Cycle_time = 1000;
	};

	class InfoFaceplatePr
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 1;
	};
}

namespace Node_Present_IPC
{
	class Basic
	{
	public:
		static const int Message_ID = 0x62C;
		static const int Cycle_time = 1000;
	};

	class IPCPr
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 1;
	};
}

//Vehicle Information
namespace Antilock_Brake_and_TC_Status_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x17D;
		static const int Cycle_time = 100;
	};

	class BrkPadWrnlO
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class VehStabEnhmntStat
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class TCSysOpMd
	{
	public:
		static const int Start_Bit = 5;
		static const int Length = 3;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Off = 0,
			Normal = 1,
			Off_Road = 2,
		};
	};
}

namespace Battery_Voltage
{
	class Basic
	{
	public:
		static const int Message_ID = 0x124;
		static const int Cycle_time = 500;
	};

	class BattStOfChrgCrtyLow
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class BatVlt
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 3;
	};

	class BatVltV
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 3;
		static const enum Value
		{
			Valid=0,
			Invalid=1
		};
	};

	class PwrMdOffBattSOC
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

}

namespace Display_Measurement_System_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x425;
		static const int Cycle_time = 0;
	};

	class DispMeasSysExt
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Metric = 0x00,
			US = 0x01,
			Imperial = 0x02,
		};
	};
}

namespace Exterior_Lighting_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x141;
		static const int Cycle_time = 30;
	};

	class IntDimDspLvlPlt
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};	

	class OtsdAmbtLtLvlStat
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Unknown=0x00,
			Night=0x01,
			Day=0x02
		};
	};	

	class OtsdAmbtLtLvlStatV
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};	

	class IntDimLvl
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};	

}

namespace Outside_Air_Temperature_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x212;
		static const int Cycle_time = 0;
	};

	class OtsAirTmp
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class OtsAirTmpCrVal
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class OtsAirTmpCrValMsk
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Dont_Use_Data=0x00,
			Use_Data=0x01
		};
	};

	class OtsAirTmpCrValV
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};

	class OtsAirTmpV
	{
	public:
		static const int Start_Bit = 1;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};
}



namespace DTC_Triggered_380
{
	class Basic
	{
	public:
		static const int Message_ID = 0x380;
		static const int Cycle_time = 1000;
	};

	class DTCI_WrnIndRqdSt_380
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused7_380
	{
	public:
		static const int Start_Bit = 1;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused6_380
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused5_380
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused4_380
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused3_380
	{
	public:
		static const int Start_Bit = 5;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused2_380
	{
	public:
		static const int Start_Bit = 6;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused1_380
	{
	public:
		static const int Start_Bit = 7;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_TstNPsdPwrUpSt_380
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_TstNPsdCdClrdSt_380
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_TstFldPwrUpSt_380
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_TstFldCdClrdStat_380
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_HistStat_380
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_DTCTriggered_380
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_DTCSource_380
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class DTCI_DTCNumber_380
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 16;
		static const int Initial_Value = 0;
	};

	class DTCI_DTCFaultType_380
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class DTCI_DTCFailType_380
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class DTCI_CurrentStatus_380
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_CodeSupported_380
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace Audio_Master_Arbitration_Command
{
	class Basic
	{
	public:
		static const int Message_ID = 0x368;
		static const int Cycle_time = 1200;
	};

	class AudMstrSrcTyp
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 5;
		static const int Initial_Value = 0;
	};

	class AudMstrChnnlTyp
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class AudMstrArbCom
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 4;
		static const int Initial_Value = 0;
	};

	class LgclAVChnl_368
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 4;
		static const int Initial_Value = 0;
	};
}

namespace Voice_Recognition_Status
{
	class Basic
	{
	public:
		static const int Message_ID = 0x14E;
		static const int Cycle_time = 0;
	};

	class PhnSpRcgnRq
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 2;
		static const int Initial_Value = 0;
	};

	class VcRecVcFdbckSt
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 2;
		static const int Initial_Value = 0;
	};
}

namespace Steering_Wheel_Control_Switches
{
	class Basic
	{
	public:
		static const int Message_ID = 0x90438040;
		static const int Cycle_time = 0;
	};

	class StrgWhlUnit1SwStat
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			No_Activation=0x00,
			Function_1=0x01,
			Function_2=0x02,
			Function_3=0x03,
			Function_4=0x04,
			Function_5=0x05,
			Function_6=0x06,
			Function_7=0x07,
			Function_8=0x08,
			Function_9=0x09,
			Function_A=0x0A,
			Function_B=0x0B,
			Function_C=0x0C,
			Function_D=0x0D,
			Function_E=0x0E,
			Function_F=0x0F
		};
	};

	class StrgWhlUnit2SwStat
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			No_Activation=0x00,
			Function_1=0x01,
			Function_2=0x02,
			Function_3=0x03,
			Function_4=0x04,
			Function_5=0x05,
			Function_6=0x06,
			Function_7=0x07,
			Function_8=0x08,
			Function_9=0x09,
			Function_A=0x0A,
			Function_B=0x0B,
			Function_C=0x0C,
			Function_D=0x0D,
			Function_E=0x0E,
			Function_F=0x0F
		};
	};
}	



namespace VIN_Digits_2_to_9_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x514;
		static const int Cycle_time = 0;
	};

	class VehIdNmDig2_9
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 64;
		static const int Initial_Value = 0;
	};

}

namespace Park_Assistant_Rear_Status
{
	class Basic
	{
	public:
		static const int Message_ID = 0x1D4;
		static const int Cycle_time = 0;
	};

	class PrkAstRrSysStat
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Disabled=0x00,
			Enabled=0x01,
			Inhibited=0x02,
			Failed=0x03

		};
	};

	class PrkAsstRrExtdDist
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 12;
		static const int Initial_Value = 0;
	};

	class PARrRgn2ObjStat
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			No_Object=0x00,
			Zone_1=0x01,
			Zone_2=0x02,
			Zone_3=0x03,
			Zone_4=0x04,
			Zone_5=0x05,
			Zone_6=0x06,
			Zone_7=0x07,
			Zone_8=0x08,
			Zone_9=0x09,
			Zone_10=0x0A,
			Zone_11=0x0B,
			Zone_12=0x0C,
			Zone_13=0x0D,
			Zone_14=0x0E,
			Zone_15=0x0F

		};
	};

	class PARrRgn1ObjStat
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			No_Object=0x00,
			Zone_1=0x01,
			Zone_2=0x02,
			Zone_3=0x03,
			Zone_4=0x04,
			Zone_5=0x05,
			Zone_6=0x06,
			Zone_7=0x07,
			Zone_8=0x08,
			Zone_9=0x09,
			Zone_10=0x0A,
			Zone_11=0x0B,
			Zone_12=0x0C,
			Zone_13=0x0D,
			Zone_14=0x0E,
			Zone_15=0x0F

		};
	};

	class PARrRgn4ObjStat
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			No_Object=0x00,
			Zone_1=0x01,
			Zone_2=0x02,
			Zone_3=0x03,
			Zone_4=0x04,
			Zone_5=0x05,
			Zone_6=0x06,
			Zone_7=0x07,
			Zone_8=0x08,
			Zone_9=0x09,
			Zone_10=0x0A,
			Zone_11=0x0B,
			Zone_12=0x0C,
			Zone_13=0x0D,
			Zone_14=0x0E,
			Zone_15=0x0F

		};
	};

	class PARrRgn3ObjStat
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			No_Object=0x00,
			Zone_1=0x01,
			Zone_2=0x02,
			Zone_3=0x03,
			Zone_4=0x04,
			Zone_5=0x05,
			Zone_6=0x06,
			Zone_7=0x07,
			Zone_8=0x08,
			Zone_9=0x09,
			Zone_10=0x0A,
			Zone_11=0x0B,
			Zone_12=0x0C,
			Zone_13=0x0D,
			Zone_14=0x0E,
			Zone_15=0x0F

		};
	};
}

static const enum Value
{
	False = 0,
	True = 1
};