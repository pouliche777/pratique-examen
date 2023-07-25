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
    
        book.learnSpell(spell);
   

}
void Warlock::forgetSpell(std::string spellName){
    this->book.forgetSpell(spellName);


}
void Warlock::launchSpell(std::string spellName, ATarget const &target){
        ATarget const *test = 0;
        if (test == &target)
            return;
        ASpell * spell = book.CreateSpell(spellName);
        if(spell){
            spell->launchSpell(target);
        }

}