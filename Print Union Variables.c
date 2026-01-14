#include <stdio.h>

// Enum to track the type of data stored in the union
enum Type {
    INTEGER,
    FLOATING_POINT
};

// Union definition
union Data {
	int integer;
	float floating_point;
};

// Structure definition to track the type of data stored in the union
struct Value{
  enum Type type;
  union Data data;
};
int main() {
    // Initialize and print the union variables
  struct Value variable1, variable2; 

   
   variable1.type = INTEGER;
	scanf("%f",&variable1.data.floating_point);
	variable1.data.integer=(int)variable1.data.floating_point;
	while(getchar()!='\n' && !feof(stdin));
	variable2.type=FLOATING_POINT;
	scanf("%f",&variable2.data.floating_point);
	if(variable1.type==INTEGER)
    
		printf("%d\n",variable1.data.integer);
	else
		printf("%.1f\n",variable1.data.floating_point);
	if(variable2.type==FLOATING_POINT)
		printf("%.1f\n",variable2.data.floating_point);
	else
		printf("%d\n",variable2.data.integer);
        

	return 0;
}
