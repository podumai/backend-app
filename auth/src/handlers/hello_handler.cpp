#include "handlers/hello_handler.hpp"
#include "sub_handlers/hello_function.hpp"

namespace auth
{

std::string HelloHandler::HandleRequest(
    userver::server::http::HttpRequest& request,
    [[maybe_unused]] userver::server::request::RequestContext& context
) const
{
  request.GetHttpResponse().SetContentType(userver::http::content_type::kTextPlain);
  return hello::helloFunction(request.GetArg("name"));
}

} /* End namespace auth */