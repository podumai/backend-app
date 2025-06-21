#include <userver/components/minimal_server_component_list.hpp>
#include <userver/utils/daemon_run.hpp>

#include "handlers/hello_handler.hpp"

#define func auto

func main(int argc, char* argv[]) -> int
{
  auto componentList{userver::components::MinimalServerComponentList()
                    .Append<auth::HelloHandler>()};
  return userver::utils::DaemonMain(argc, argv, componentList);
}