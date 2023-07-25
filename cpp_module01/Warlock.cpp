#include "Warlock.hpp"

Warlock:: Warlock(std::string const &name, std::string const &title){
    this->name = name;
    this->title = title;
    std::cout <<name << ": This looks like another boring day." << std::endl;
    std::map<std::string, ASpell *>::iterator it = spellBook.begin();
    std::map<std::string, ASpell *>::iterator ite = spellBook.end();
    while(it != ite){
        delete it->second;
        it++;
    }
    this->spellBook.clear();
}
 void Warlock::introduce() const{
    std::cout << name <<": I am " <<name<< ", " <<title<< "!" <<std::endl;
}
std::string const &Warlock::getName() const{
    return (this->name);
}
std::string const &Warlock::getTitle() const{
    return (this->title);

}
void Warlock::setTitle(std::string const &title){
    this->title =title;
}
Warlock:: ~Warlock(){
std::cout << name<< ": My job here is done!" << std::endl;

}
void Warlock::learnSpell(ASpell *spell){
    if(spell){
        spellBook[spell->getName()] = spell->clone();
    }

}
void Warlock::forgetSpell(std::string spellName){
    std::map<std::string, ASpell *>::iterator it = spellBook.find(spellName);
    if(it != spellBook.end())
        delete it->second;
    spellBook.erase(spellName);


}
void Warlock::launchSpell(std::string spellName, ATarget const &target){

        ASpell * spell = spellBook[spellName];
        if(spell){
            spell->launchSpell(target);
        }

}