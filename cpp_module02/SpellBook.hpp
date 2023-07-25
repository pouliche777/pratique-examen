#pragma once

#include <iostream>
#include "ASpell.hpp"
#include <map>


 class SpellBook{

    private:
        
        SpellBook(SpellBook const & other);
        SpellBook &operator=(SpellBook const other);
        std::map <std::string, ASpell *> spellBook;


    public :
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const  & spellName);
        ASpell* CreateSpell(std::string const  &spellName);

 };