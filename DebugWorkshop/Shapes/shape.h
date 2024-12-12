#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape 
{
private:
	float _area;
	float _perimeter;

public:
	Shape();
	// added the 'bool has_depth = false' arg in order to conect both 'get_area'
	// of shape and Triangle
	virtual float get_area(bool has_depth = false) const;

};

#endif	// __SHAPE_H__
