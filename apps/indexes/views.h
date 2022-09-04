#ifndef PROJECT_indexes_VIEWS
#define PROJECT_indexes_VIEWS
#include <chameleon/http/HttpRequest.h>
#include <chameleon/http/HttpResponse.h>
#include <apps/indexes/models.h>
// urls.cpp
void indexes_urls_init();

namespace indexes{
    void home(HttpRequest *request);
}

#endif