#include "SpellBook.hpp"

SpellBook:: SpellBook(){
   
}

SpellBook:: ~SpellBook(){

}
void SpellBook::learnSpell(ASpell *spell){
    if(spell){
        spellBook[spell->getName()] = spell->clone();
    }
}
void SpellBook::forgetSpell(std::string  const & spellName){
    std::map<std::string, ASpell *>::iterator it = spellBook.find(spellName);
    if(it != spellBook.end())
        delete it->second;
    spellBook.erase(spellName);


}
ASpell* SpellBook::CreateSpell(std::string const & spellName){
        std::map <std::string, ASpell *>::iterator it = spellBook.find(spellName);
        if(it != spellBook.end())
            return it->second;
        else
            return NULL;

}