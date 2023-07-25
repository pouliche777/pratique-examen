#pragma once
#include "ASpell.hpp"
#include <iostream>
class ASpell;
 class ATarget{

    protected:
        std::string type;
      
        
    public :
        ATarget();
        ATarget (std::string const &type);
        ATarget(ATarget const & other);
        ATarget &operator=(ATarget const &other);
        std::string const &getType() const;
        virtual ~ATarget();
        virtual ATarget *clone () const = 0;
        void getHitBySpell(ASpell const & spell)const;

 };