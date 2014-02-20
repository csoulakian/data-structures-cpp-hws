#pragma once
class Fscan
{
public:
	int DiskArmLocation;
	const int MaxQueueSize = 5;

private:
	PriorityQueue _requests();

};

