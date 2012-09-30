
#include <map>
#include <string>
#include "DocumentImpl.h"

using namespace std;

void DocumentImpl::addEntry(const string& key, const string& value)
{
	entries.insert(make_pair(key, value));
}

const map<string, string>& DocumentImpl::getEntries()
{
	return entries;
}


