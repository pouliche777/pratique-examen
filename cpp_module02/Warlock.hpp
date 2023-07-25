#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <map>


 class Warlock{

    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock(Warlock const & other);
        Warlock &operator=(Warlock const other);
        std::map <std::string, ASpell *> spellBook;
        SpellBook book;

    public :
        Warlock (std::string const  &name, std::string const  &title);
        void introduce() const;
        std::string const &getName() const;
        std::string const &getTitle() const;
        void setTitle(std::string const &title);
        ~Warlock();

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, ATarget const &target);

 };




// Add to the Warlock the following member functions:
// * learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
// * forgetSpell, takes a string corresponding a to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell, does nothing.
// * launchSpell, takes a string (a spell name) and a reference to ATarget, that
//   launches the spell on the selected target. If it's not a known spell, does
//   nothing.
// You will need a new attribute to store the spells your Warlock knows. Several
// types fit the bill, it's up to you to choose the best one.