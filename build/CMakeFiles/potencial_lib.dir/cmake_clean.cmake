file(REMOVE_RECURSE
  "libpotencial_lib.dll"
  "libpotencial_lib.dll.a"
  "libpotencial_lib.dll.manifest"
  "libpotencial_lib.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/potencial_lib.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
