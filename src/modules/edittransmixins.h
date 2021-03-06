/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani, Gregory Burlet
    
    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:
    
    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef EDITTRANSMIXIN_H_
#define EDITTRANSMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class AgentidentMixIn {
    public:
        explicit AgentidentMixIn(MeiElement *b);
        virtual ~AgentidentMixIn();
        /** \brief 
         */
        MeiAttribute* getAgent();
        void setAgent(std::string _agent);
        bool hasAgent();
        void removeAgent();

/* include <agentmixin> */

    private:
        MeiElement *b;
};

class EditMixIn {
    public:
        explicit EditMixIn(MeiElement *b);
        virtual ~EditMixIn();
        /** \brief 
         */
        MeiAttribute* getCert();
        void setCert(std::string _cert);
        bool hasCert();
        void removeCert();
        /** \brief 
         */
        MeiAttribute* getEvidence();
        void setEvidence(std::string _evidence);
        bool hasEvidence();
        void removeEvidence();

/* include <evidencemixin> */

    private:
        MeiElement *b;
};

class ExtentMixIn {
    public:
        explicit ExtentMixIn(MeiElement *b);
        virtual ~ExtentMixIn();
        /** \brief 
         */
        MeiAttribute* getExtent();
        void setExtent(std::string _extent);
        bool hasExtent();
        void removeExtent();

/* include <extentmixin> */

    private:
        MeiElement *b;
};

class ReasonidentMixIn {
    public:
        explicit ReasonidentMixIn(MeiElement *b);
        virtual ~ReasonidentMixIn();
        /** \brief 
         */
        MeiAttribute* getReason();
        void setReason(std::string _reason);
        bool hasReason();
        void removeReason();

/* include <reasonmixin> */

    private:
        MeiElement *b;
};
}
#endif  // EDITTRANSMIXIN_H_
