#include <apps/indexes/views.h>
#include <chameleon/conf/vars.h>

void indexes_urls_init(){
url_patterns
            ->path("/",(void *)indexes::home)
    ;
}
