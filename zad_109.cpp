
// Pytanie z rozmowy: wymień trzy znane Ci wyjątki (jeśli nie miałeś problemu z wymienieniem trzech - wymień pięć):
// 1) logic_error - It reports errors that are a consequence of faulty logic
//     a) invalid_argument - It reports errors that arise because an argument value has not been accepted.
          try
          {
              [[maybe_unused]] int f = std::stoi("ABBA"); // Throws: no conversion
          }
          catch (std::invalid_argument const& ex)
          {
              std::cout << "#2: " << ex.what() << '\n';
          }
//     b) domain_error
//     c) length_error - It reports errors that result from attempts to exceed implementation defined length limits for some object.
          // length_error example
          #include <iostream>       // std::cerr
          #include <stdexcept>      // std::length_error
          #include <vector>         // std::vector

          int main (void) {
            try {
              // vector throws a length_error if resized above max_size
              std::vector<int> myvector;
              myvector.resize(myvector.max_size()+1);
            }
            catch (const std::length_error& le) {
              std::cerr << "Length error: " << le.what() << '\n';
            }
            return 0;
          }
//     d) out_of_range
//     d) future_error(C++11)
// 2) runtime_error
//     a) range_error
//     b) overflow_error
//     c) underflow_error
//     d) regex_error(C++11)
//     e) system_error(C++11)
//     f) ios_base::failure(C++11)
//     g) filesystem::filesystem_error(C++17)
//     h) tx_exception(TM TS)
//     i) nonexistent_local_time(C++20)
//     j) ambiguous_local_time(C++20)
//     k) format_error(C++20)
// 3) bad_typeid
// 4) bad_cast
// 5) bad_any_cast(C++17)
// 6) bad_optional_access(C++17)
// 7) bad_expected_access(C++23)
// 8) bad_weak_ptr(C++11)
// 9) bad_function_call(C++11)
// 10) bad_alloc
// 11) bad_array_new_length(C++11)
// 12) bad_exception
// 13) ios_base::failure(until C++11)
// 14) bad_variant_access(C++17)