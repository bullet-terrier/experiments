
// Defining the basic entities for one and two dimensional entities.

#ifndef PI
#define PI

const float pi =  3.142

#endif

#ifndef _VECTOR_
#define _VECTOR_

typedef struct POINTS{
  int x;
  int y;
  int n; // storing an n and r for use in radial coordinates.
  int r;
} POINT;

// How shall I define the vector...
typedef struct VECTORS{
  POINT base;
  POINT end; 
  float  value;
  float  slope;  
} VECTOR;

#endif

#ifdef  _VECTOR_
#ifndef _TRIANGLE_
#define _TRIANGLE_

// I should define an angle bisector;
// 
typedef struct ANGLES{
    VECTOR side_a;
    VECTOR side_b;
    int theta;
    // describethe angle in terms of the 
    // sides that comprise them?
    int angle;
} ANGLE;

typedef struct TRIANGLES{
    VECTOR side_a;
    VECTOR side_b;
    VECTOR side_c;
    ANGLE  theta_ab;
    ANGLE  theta_bc;
    ANGLE  theta_ac;
    POINT  a;
    POINT  b;
    POINT  c;
    float area;
    float perimeter;
} TRIANGLE;

#endif
#endif

#ifndef TRIGONOMETRY
#ifdef _TRIANGLE_
#define TRIGONOMETRY
// defining some accessor methods to the entities.
// that's correct - objects in C lmao.

POINT radial_point(int n, int r)
{
    POINT pt;
    pt.n = n;
    pt.r = r;
    return pt;
}

// use this to generate a cartesian point.
POINT get_point(int x, int y)
{
    POINT pt;
    pt.x = x;
    pt.y = y;
    return pt;
}

VECTOR get_vector(point a, point b)
{
    VECTOR vec;
    vec.base = a;
    vec.end  = b;
    vec.slope = (b.y-a.y)/(b.x - a.x)
    return vec;
}

//
TRIANGLE get_triangle(POINT a, POINT b, POINT c)
{
    TRIANGLE tri;
    tri.a = a;
    tri.b = b;
    tri.c = c;
    tri.side_a = 
}

#endif
#endif