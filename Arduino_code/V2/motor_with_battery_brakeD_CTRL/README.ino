// -------------------------PORTS----------------------------------------
  //-------analogRead-----------
    // A1 -> controller
    // A1 -> battery
    // A2 -> brakeV
    
  //-------digitalRead----------
    // D8 -> botton on the controller
    // D10,11 -> communication

  //--------------PWM--------------
    // D3 -> SPX  <Transistor>

  //Communication
    //Serial4 -> Central   (10,11)*RX/TX*
     // --Code symbol for Serial4 (O)--
      //'P'+ASPXpower
      //'^' <Button Pressed>
      //'V'+batteryV <Actual Voltage *100>
      //'#' <Brake applied>
      //'E' <CTRL　Error　Occur>
      //'S' <CTRL Error Solved>
      //
     // --Code symbol for Serial4 (I)--
      //'@' <UNLOCK>
      //'%' <LOCK>
      




      
