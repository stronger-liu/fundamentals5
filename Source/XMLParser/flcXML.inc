{$INCLUDE ..\flcInclude.inc}

{$IFDEF DEBUG}
  {$DEFINE XML_DEBUG}
{$ENDIF}

{$IFDEF DEBUG}
{$IFDEF TEST}
  {$DEFINE XML_TEST}
{$ENDIF}
{$ENDIF}

{$IFDEF FREEPASCAL}{$IFDEF DEBUG}
  {$WARNINGS OFF}{$HINTS OFF}
{$ENDIF}{$ENDIF}

