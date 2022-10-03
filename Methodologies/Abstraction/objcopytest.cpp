#define TESTING
#include "interval.h"
#include <cstdio>

class Journey
{
public:
	Journey(float dis, Interval dur) : duration(dur)
	{
		distance = dis;
		//duration = dur;
	}

	float Speed() const
	{
		return distance / duration.Time();
	}
private:
	float distance;
	Interval duration;
};

int main(void)
{
	float d;
	int m, s;
	printf("Distance: ");
	scanf("%f", &d);
	printf("Minutes and Seconds: ");
	scanf("%d%d", &m, &s);

	Interval i(m, s);
	Journey j(d, i);
	printf("Speed = %.3f\n", j.Speed());
}

