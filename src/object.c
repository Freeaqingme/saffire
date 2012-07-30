#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "object.h"

#define MAX_METHODS_PER_OBJ 50
#define MAX_OBJ_PARENTS 25
#define MAX_CLASS_NAME_LENGTH 255
#define MAX_METHOD_NAME_LENGTH 64

struct t_method {
    char name[MAX_METHOD_NAME_LENGTH];
};

struct t_property {
    char name[MAX_METHOD_NAME_LENGTH];
    struct t_object *object;
};

struct t_class {
    char name;
    struct t_class *parents[MAX_OBJ_PARENTS];
    struct t_method *methods[MAX_METHODS_PER_OBJ];
    struct t_property *properties[MAX_METHODS_PER_OBJ];
    int type; // 0 = normal, 1 = abstract, 2 = interface, 3 = anonymous(?)

};

struct t_object {
	struct t_class *class;
};

void tmp() {
	struct t_object objects[50];

	printf("tmp!");

}

/**********
 * class String
 * 			- value ???
 *
 * 	class Integer
 * 			- value ???
 *
 * Class Color
 * 			- value (String)
 *
 * abstract class abstractCar
 * 			- numberOfWheels (Int)
 * 			- color (Color)
 *
 * 			- drive()
 *
 *
 * class Ferrari extends abstractCar
 */
