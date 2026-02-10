#ifndef colour_h
#define colour_h

class colour
{
	float red;
	float green;
	float blue;

public:
	colour(float r, float g, float b);

	void SetRed(float r);
	void SetGreen(float g);
	void SetBlue(float b); 

	float GetRed();
	float GetGreen();
	float GetBlue();
};

#endif // !colour_h
