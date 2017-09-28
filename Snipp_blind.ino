    setup
      |
      +-------------------------------+------------------------\
      V                               |                        |
      |                               |                        |
  --------             ------------   |                        |
 |  IDLE  |-- long -->| analog auf |--/                        |  LANG
  --------             ------------             ----------     | 
      |                             /-- wait --| halb auf |----+  CLICK        
      |             -----------    /            ----------     |     
      +-- click -->|  clicked   |==                            |
      |             ------------   \            ------------   |                                 
      |                             \-- long --| alle analog|--+  CLICK LANG         
      |                                         ------------   |                                     
      |                                           ----------   | 
      |                              /--- wait --| ganz auf |--+  doppel CLICK           
      |               -----------   /             ----------   |
      +-- d-click -->| d-clicked |==-- d-click --| alle ganz|--+  vier  CLICK           
                      -----------   \             -----------  |
                                     \-- click --| alle halb |-+  drei CLICK         
                                                   -----------
