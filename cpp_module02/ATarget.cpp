#include "ATarget.hpp"
ATarget:: ATarget(std::string const &type){
    this->type = type;
}


std::string const &ATarget::getType() const{
    return (this->type);
}

ATarget:: ATarget(ATarget const & other){
    *this = other;
}
ATarget & ATarget::operator=(ATarget const &other){
    this->type = other.type;
    return (*this); 
}
ATarget:: ~ATarget(){
}
void ATarget::getHitBySpell(ASpell const & spell) const{
    std::cout << type << " has been " << spell.getEffects() << "!"<< std::endl;
}