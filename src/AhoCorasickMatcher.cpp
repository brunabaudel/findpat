#include "AhoCorasickMatcher.h"

AhoCorasickMatcher::AhoCorasickMatcher(vector<string>& patterns) : StringMatcher(patterns){
  preProcessPatterns();
}

AhoCorasickMatcher::~AhoCorasickMatcher(){
  
}

int AhoCorasickMatcher::findMatches(string& text) {
  int matchesCount = 0;

  return matchesCount;
}

void AhoCorasickMatcher::preProcessPatterns() {

}