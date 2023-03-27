#pragma once
class Counter
{
private:
	int value; 
public:
	void Inc();
	void Dec();
	int ShowValue();
	Counter();
	Counter(int value);
};
void Command(Counter& counter);
