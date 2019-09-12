class test {
	

	public:

		test() : m_programState(NEW_NEW){};

		enum ORDER_STATUS
		{
			OS_NEW=0,
			OS_PARTIAL_FILL=1,
			OS_FILLED=2,
			OS_CANCEL=4
		};

		enum PROGRAM_STATE
		{
			NEW_NEW,
			FILLED_NEW,
			PARTIAL_NEW,
			PARTIAL_CANCEL,
			FILLED_PARTIAL,
			FILLED_CANCEL,
			PARTIAL_PARTIAL,
			FILLED_FILLED
		};

		PROGRAM_STATE m_programState;
		

		PROGRAM_STATE getState(){
			return m_programState;
		}

		void setState(PROGRAM_STATE s){
			m_programState=s;
		}

};