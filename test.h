class test {
	

	public:

		test() : m_programState(NEW_NEW){};

		enum PROGRAM_STATE
		{
			NEW_NEW,
			FILLED_NEW,
			PARTIAL_NEW,
			PARTIAL_PARTIAL,
			FILLED_PARTIAL,
			PARTIAL_CANCEL,
			FILLED_CANCEL,
			FILLED_FILLED
		};

		enum ORDER_STATUS
		{
			OS_NEW=0,
			OS_PARTIAL_FILL=1,
			OS_FILLED=2,
			OS_CANCEL=4
		};

		PROGRAM_STATE transition(ORDER_STATUS s1, ORDER_STATUS s2){
			
			if(s1 == OS_NEW && s2 == OS_NEW)
			{
				return NEW_NEW;
			} 
			else if (s1 == OS_FILLED && s2 == OS_NEW)
			{
				return FILLED_NEW;
			}
			else if (s1 == OS_PARTIAL_FILL && s2 == OS_NEW)
			{
				return PARTIAL_NEW;
			} 
			else if (s1 == OS_PARTIAL_FILL && s2 == OS_PARTIAL_FILL)
			{
				return PARTIAL_PARTIAL;
			} 
			else if (s1 == OS_FILLED && s2 == OS_PARTIAL_FILL)
			{
				return FILLED_PARTIAL;
			} 
			else if (s1 == OS_PARTIAL_FILL && s2 == OS_CANCEL)
			{
				return PARTIAL_CANCEL;
			} 
			else if (s1 == OS_FILLED && s2 == OS_CANCEL)
			{
				return FILLED_CANCEL;
			} 
			else if (s1 == OS_FILLED && s2 == OS_FILLED)
			{
				return FILLED_FILLED;
			} else {
				printf("UNKNOWN STATE\n");
				return NEW_NEW;
			}

		}

		PROGRAM_STATE m_programState;


		PROGRAM_STATE getState(){
			return m_programState;
		}

		void setState(PROGRAM_STATE s){
			m_programState=s;
		}

};