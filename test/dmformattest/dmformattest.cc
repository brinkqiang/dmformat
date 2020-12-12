
#include "dmformat.h"
#include "dmranges.h"
#include <iostream>
#include <vector>
#include <list>
#include <sstream>
#include "dmchrono.h"

int main()
{
	fmt::print(fmt::format("{0},{1},{2}\n", "a", "b", "c"));
	fmt::print(fmt::format("{2},{1},{0}\n", "a", "b", "c"));

	std::vector<std::vector<int32_t>> ivv{ {1, 2}, {3, 5}, {7, 11} };
	auto ivf = fmt::format("{}\n", ivv);

	std::chrono::system_clock::time_point point = std::chrono::system_clock::now();

	fmt::print(fmt::format("It is {:%Y-%m-%d %H:%M:%S}\n", point));

	fmt::dynamic_format_arg_store<fmt::format_context> store;
	store.push_back(42);
	store.push_back("abc1");
	store.push_back(1.5f);
	fmt::print(fmt::vformat("{} and {} and {}\n", store));

	auto t1 = std::make_tuple('a', 1, 2.0f);
	fmt::print(fmt::format("{}\n", t1));
	fmt::print(fmt::format("({})\n", fmt::join(t1, ",")));

	fmt::print(fmt::format("{}{}{}{}{}{}{}{}{}{}{}{}\n", 1, 2, 3, 4, 5, 6, 'a', 'b', 'c', 'd', 'e', 'f'));

	fmt::print(fmt::format("{NAME}-{AGE}-{JOB}\n", fmt::arg("NAME", "TOM"), fmt::arg("AGE", 32), fmt::arg("JOB", "player")));

    return 0;
}