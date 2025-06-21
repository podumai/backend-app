#pragma once

#include <string>
#include <string_view>

#include <userver/components/component_list.hpp>
#include <userver/server/handlers/http_handler_base.hpp>

namespace auth
{

class HelloHandler final : public userver::server::handlers::HttpHandlerBase
{
 public:
  static constexpr std::string_view kName{"hello-handler-auth"};

  using HttpHandlerBase::HttpHandlerBase;

  std::string HandleRequest(
      userver::server::http::HttpRequest& request,
      [[maybe_unused]] userver::server::request::RequestContext& context
  ) const override;
};

} /* End namespace auth */