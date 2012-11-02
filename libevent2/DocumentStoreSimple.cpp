
#include "DocumentStoreSimple.h"
#include <map>
#include <memory>

using namespace std;

DocumentStoreSimple::DocumentStoreSimple() {
	store.Open("/tmp/DocumentStore");	
}

void DocumentStoreSimple::addDoc(unsigned int docId, shared_ptr<IDocument> doc) {
	//store.Put(docId,);
	documents.insert(make_pair(docId++, doc));
}

void DocumentStoreSimple::removeDoc(unsigned int docId) {
	documents.erase(docId);
}

const map<unsigned int, shared_ptr<IDocument>>& DocumentStoreSimple::getDocuments() {
	return documents;
}

