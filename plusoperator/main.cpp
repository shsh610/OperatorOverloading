#include<iostream>

class Point2D
{
private:
	int mX;
	int mY;

public:
	Point2D() = default;
	Point2D(int x, int y) : mX(x), mY(y)
	{

	}

	void Print()
	{
		std::cout << "(" << mX << "," << mY << ")" << std::endl;
	}

	Point2D operator + (Point2D rhs)
	{
		Point2D result;
		result.mX = this->mX + rhs.mX;
		result.mY = this->mY + rhs.mY;

		return result;
	}

	//friend Point2D operator + (Point2D lhs, Point2D rhs);
};

Point2D operator + (Point2D lhs, Point2D rhs)
{
	Point2D result;
	result.mX = lhs.mX + rhs.mX;
	result.mY = lhs.mY + rhs.mY;

	return result;
}

int main()
{
	Point2D pt1(2, 3), pt2(3, 5);
}