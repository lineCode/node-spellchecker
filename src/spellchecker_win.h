#ifndef SRC_SPELLCHECKER_WIN_H_
#define SRC_SPELLCHECKER_WIN_H_

#include <spellcheck.h>
#include "spellchecker.h"

namespace spellchecker {

class WindowsSpellchecker : public SpellcheckerImplementation {
private:
  ISpellChecker* currentSpellchecker;
  ISpellCheckerFactory* spellcheckerFactory;
};

}  // namespace spellchecker

#endif  // SRC_SPELLCHECKER_MAC_H_
