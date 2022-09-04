#include <apps/indexes/views.h>
// indexes.views.o
void indexes::home(HttpRequest *request){
    render(request,"index.html",{});
}