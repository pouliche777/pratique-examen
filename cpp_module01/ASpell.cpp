#include "ASpell.hpp"
ASpell:: ASpell(std::string const &name, std::string const &effects){
    this->name = name;
    this->effects = effects;
}


std::string const &ASpell::getName() const{
    return (this->name);
}
std::string const &ASpell::getEffects() const{
    return (this->effects);

}
ASpell:: ASpell(ASpell const & other){
    *this = other;
}
ASpell & ASpell::operator=(ASpell const &other){
    this->effects = other.effects;
    this->name = other.name;
    return (*this); 
}
ASpell:: ~ASpell(){

}
void ASpell:: launchSpell( ATarget const & target){
    target.getHitBySpell(*this);
}