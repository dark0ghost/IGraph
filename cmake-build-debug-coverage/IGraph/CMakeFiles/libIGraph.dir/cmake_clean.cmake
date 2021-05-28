file(REMOVE_RECURSE
  "liblibIGraph.pdb"
  "liblibIGraph.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/libIGraph.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
