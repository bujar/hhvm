<?hh

<<file:__EnableUnstableFeatures('modules')>>
<<file:__EnableUnstableFeatures('module_references')>>

new module z {
  imports {
    x.*.y
  }
}