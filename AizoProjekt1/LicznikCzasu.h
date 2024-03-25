#pragma once
class LicznikCzasu {
public:
	void start();
	void stop();
	double PCFreq = 0.0; //Stackoverflow
	__int64 CounterStart = 0;
};
