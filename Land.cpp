// Land.cpp (Skeleton)
#include <iostream>
#include <string>

#include "Land.h"

int Land::totalLands = 0;

Land::Land(const std::string& name, int cost, LandType t) : Card(name, cost) {
  // TODO: initialize landType
  landType = t;
  // TODO: increment totalLands count
  totalLands++;
}

Land::Land(const Land& other) : Card(other.name, other.cost) {
  // TODO: copy other's landType
  landType = other.landType;
  // TODO: increment totalLands count
  totalLands++;
}

Land::~Land() {
  // TODO: decrement totalLands count
  totalLands--;
}

void Land::printInfo() const {
  // TODO: print land details in format:
  std::string typeName;
  switch (landType) {
    case LandType::FOREST:
      typeName = "Forest";
      break;
    case LandType::MOUNTAIN:
      typeName = "Mountain";
      break;
    case LandType::SWAMP:
      typeName = "Swamp";
      break;
  }
  std::cout << "Land - " << name << " (Cost " << cost << "): " << typeName << " land." << std::endl;
  // "Land - <name> (Cost <cost>): <TypeName> land."
}

Land::LandType Land::getLandType() const {
  // TODO
  return landType;
}

int Land::getTotalLands() {
  // TODO
  return totalLands;
}
// clone() method creates a deep copy of the Land object using the copy
// constructor
Card* Land::clone() const { return new Land(*this); }
// getType() method returns the Type for a Card object
Card::Type Land::getType() const { return Type::LAND; }