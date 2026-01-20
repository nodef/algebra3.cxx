Vector utilities for 2, 3, and 4 element vectors, all inline -
by Jean-Francois Doue, Paul S. Heckbert, and J. Nagle (1993).


## Installation

Run:

```sh
$ npm i algebra3.cxx
```

And then include `algebra3.h` as follows:

```cxx
// main.cxx
#include <algebra3.h>

int main() { /* ... */ }
```

Finally, compile while adding the path `node_modules/algebra3.cxx` to your compiler's include paths.

```bash
$ clang++ -I./node_modules/algebra3.cxx main.cxx  # or, use g++
$ g++     -I./node_modules/algebra3.cxx main.cxx
```

You may also use a simpler approach with the [cpoach](https://www.npmjs.com/package/cpoach.sh) tool, which automatically adds the necessary include paths of all the installed dependencies for your project.

```bash
$ cpoach clang++ main.cxx  # or, use g++
$ cpoach g++     main.cxx
```

<br>
<br>


[![](https://raw.githubusercontent.com/qb40/designs/gh-pages/0/image/11.png)](https://wolfram77.github.io)<br>
[![ORG](https://img.shields.io/badge/org-nodef-green?logo=Org)](https://nodef.github.io)
![](https://ga-beacon.deno.dev/G-RC63DPBH3P:SH3Eq-NoQ9mwgYeHWxu7cw/github.com/nodef/algebra3.cxx)
