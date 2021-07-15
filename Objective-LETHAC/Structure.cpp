#include<unordered_map>
#include"part.h"

#ifndef STRUCTURE
#define STRUCTURE 

struct loc {
	int begin;
	int end;
};
class Structure {
public:
	std::unordered_map<std::string, Part__> Map;
	std::unordered_map<std::string, loc> locationMap;
	void locationSetting();
	void StructureSetting();
private:
};

void Structure::locationSetting() {

}
void Structure::StructureSetting() {

}
#endif