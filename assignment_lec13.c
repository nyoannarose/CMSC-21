#include <stdio.h>
#include <math.h>

//STRUCTURES
struct point
{
    float x;
    float y;
};

struct line
{
    struct point start;
    struct point end;
};

struct point midPoint(struct line);
float findDistance(struct line);
float solveSlope(struct line);

int main()
{
    struct point p;
    struct line myLine;
    float distance;
    float slope;

//POINTS or USER INPUT
    printf("Enter x coordinate of starting point: ");
    scanf("%f", &myLine.start.x);
    printf("Enter y coordinate of starting point: ");
    scanf("%f", &myLine.start.y);
    printf("Enter x coordinate of ending point: ");
    scanf("%f", &myLine.end.x);
    printf("Enter y coordinate of ending point: ");
    scanf("%f", &myLine.end.y);

//MIDPOINT RESULT
    p = midPoint(myLine);
    printf("\nThe midPoint of (%.2f,%.2f) & (%.2f,%.2f) is (%.2f,%.2f)\n",
        myLine.start.x, myLine.start.y, myLine.end.x, myLine.end.y, p.x,
        p.y);


//DISTANCE RESULT
    distance = findDistance(myLine);
    printf("The distance between (%.2f,%.2f) & (%.2f,%.2f) is %.2f\n",
        myLine.start.x, myLine.start.y, myLine.end.x, myLine.end.y, distance);

//SLOPE RESULT      
    slope= solveSlope(myLine);
    printf("The slope of (%.2f,%.2f) & (%.2f,%.2f) is %.2f\n",
        myLine.start.x, myLine.start.y, myLine.end.x, myLine.end.y, slope);

    return 0;
} 

//MIDPOINT FORMULA
struct point midPoint(struct line myLine)
{
    struct point temp;
    temp.x = (myLine.start.x + myLine.end.x) / 2.0;
    temp.y = (myLine.start.y + myLine.end.y) / 2.0;
    return temp;
} 

//DISTANCE FORMULA
float findDistance(struct line myLine)
{
    float distance;
    distance = sqrt((myLine.start.x - myLine.end.x) * (myLine.start.x -
        myLine.end.x) + (myLine.start.y - myLine.end.y) * (myLine.start.y -
        myLine.end.y));

    return distance;
}

//SLOPE FORMULA
float solveSlope(struct line myLine)
{
    float slope;
    slope = (myLine.start.y - myLine.end.y)/(myLine.start.x - myLine.end.x);

    return slope;
}