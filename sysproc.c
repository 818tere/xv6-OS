//Add this in the end of the sysproc.c file

int
sys_cps(void)
{
  return cps();
}
