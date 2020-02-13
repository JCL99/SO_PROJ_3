Estrutura das directorias existentes no arquivo:
  ---> CircuitRouter-SimpleShell: Directoria. Contem o codigo de uma shell,
  desenvolvida no ex1, que lanca quantas instancias quisermos do
  CircuitRouter-SeqSolver.

  ---> CircuitRouter-SeqSolver: Directoria. Contem o codigo do proprama
  principal, tambem desenvolvido no ex1, que resolve o que pretendemos e guarda
  a resposta em ficheiros gerindo os mesmos caso necessario. Este programa e
  sequecial pelo que corre num so core.

  ---> CircuitRouter-ParSolver: Directoria. Contem o codigo do proprama
  principal. No entanto, este codigo foi modificado para ser sequencial,
  correndo com varias tarefas trabalhadoras. Mais do que um core e usado,
  caso a maquina tenha tal numero de cores.

  ---> Inputs: Directoria. Tem os ficheiros .txt com os problemas a resolver.
  E la que sao criados os ficheiros de output com a resolucao, quer do SeqSolver,
  como do ParSolver.

  ---> results: Resultados de execucoes(na maquina descrita mais abaixo): exec_time e speedup!

  ---> lib: Directoria. Tem varios ficheiros uteis, visto que como o nome indica,
  temos uma biblioteca (de funcoes, no fundo) que e util a todo o programa, como
  o commandlinereader que e extremamente util (no SeqSolver).

  ---> README.txt: Ficheiro txt. Este ficheiro! Espera-se que quem o leia possa
  ter uma melhor compreeesao dos conteudos deste projeto, deste programa.

Passos para compilar e executar o projecto por linha de comando ou pelo doTest.sh:
  Por linha de comando:
    1) Para compilar:
    Nas directorias {CircuitRouter-ParSolver, CircuitRouter-SeqSolver, CircuitRouter-SimpleShell}
    execute o comando 'make'. Parabens! Tem o projeto todo compilado :)
    2) Para executar:
      Basta estar nas directorias acima mencionadas e executar './' seguido do
      nome do programa, com os seguintes argumentos:(exemplo):
        ./CircuitRouter-SeqSolver <nomeFicheiro de input>
        ./CircuitRouter-ParSolver -t <numero de tarefas trabalhadoras> <nomeFicheiro de input>
        ./CircuitRouter-SimpleShell
          dentro da shell faça:
            'run' <nome ficheiro input>
            para lancar uma instancia de SeqSolver para resolver o seu problema

            OU

            'exit'
            para sair

    por doTest.sh:
      1) Garanta que esta na pasta do doTest.sh:
        Basta executar ./doTest.sh <numero limite de tarefas> <nome ficheiro input>
        Esta feito! O seu problema sera resolvido e tera os dados da execucao para
        analisar na pasta de inputs! Divirta-se!

Descrição das caraterı́sticas do processador e sistema operativo usado pelo testes:
  2 Cores, 4 threads @1.6gHz ate 2.7gHz
  Info detalhada:

  uname -a{
  Linux MacBookAir 4.15.0-38-generic #41-Ubuntu SMP Wed Oct 10 10:59:38 UTC 2018 x86_64 x86_64 x86_64 GNU/Linux
  }

  cat /proc/cpuinfo{
  processor	: 0
  vendor_id	: GenuineIntel
  cpu family	: 6
  model		: 61
  model name	: Intel(R) Core(TM) i5-5250U CPU @ 1.60GHz
  stepping	: 4
  microcode	: 0x2b
  cpu MHz		: 1502.062
  cache size	: 3072 KB
  physical id	: 0
  siblings	: 4
  core id		: 0
  cpu cores	: 2
  apicid		: 0
  initial apicid	: 0
  fpu		: yes
  fpu_exception	: yes
  cpuid level	: 20
  wp		: yes
  flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb invpcid_single pti ssbd ibrs ibpb stibp tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap intel_pt xsaveopt dtherm ida arat pln pts flush_l1d
  bugs		: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass l1tf
  bogomips	: 3199.88
  clflush size	: 64
  cache_alignment	: 64
  address sizes	: 39 bits physical, 48 bits virtual
  power management:

  processor	: 1
  vendor_id	: GenuineIntel
  cpu family	: 6
  model		: 61
  model name	: Intel(R) Core(TM) i5-5250U CPU @ 1.60GHz
  stepping	: 4
  microcode	: 0x2b
  cpu MHz		: 1394.515
  cache size	: 3072 KB
  physical id	: 0
  siblings	: 4
  core id		: 1
  cpu cores	: 2
  apicid		: 2
  initial apicid	: 2
  fpu		: yes
  fpu_exception	: yes
  cpuid level	: 20
  wp		: yes
  flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb invpcid_single pti ssbd ibrs ibpb stibp tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap intel_pt xsaveopt dtherm ida arat pln pts flush_l1d
  bugs		: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass l1tf
  bogomips	: 3199.88
  clflush size	: 64
  cache_alignment	: 64
  address sizes	: 39 bits physical, 48 bits virtual
  power management:

  processor	: 2
  vendor_id	: GenuineIntel
  cpu family	: 6
  model		: 61
  model name	: Intel(R) Core(TM) i5-5250U CPU @ 1.60GHz
  stepping	: 4
  microcode	: 0x2b
  cpu MHz		: 1453.661
  cache size	: 3072 KB
  physical id	: 0
  siblings	: 4
  core id		: 0
  cpu cores	: 2
  apicid		: 1
  initial apicid	: 1
  fpu		: yes
  fpu_exception	: yes
  cpuid level	: 20
  wp		: yes
  flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb invpcid_single pti ssbd ibrs ibpb stibp tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap intel_pt xsaveopt dtherm ida arat pln pts flush_l1d
  bugs		: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass l1tf
  bogomips	: 3199.88
  clflush size	: 64
  cache_alignment	: 64
  address sizes	: 39 bits physical, 48 bits virtual
  power management:

  processor	: 3
  vendor_id	: GenuineIntel
  cpu family	: 6
  model		: 61
  model name	: Intel(R) Core(TM) i5-5250U CPU @ 1.60GHz
  stepping	: 4
  microcode	: 0x2b
  cpu MHz		: 1493.016
  cache size	: 3072 KB
  physical id	: 0
  siblings	: 4
  core id		: 1
  cpu cores	: 2
  apicid		: 3
  initial apicid	: 3
  fpu		: yes
  fpu_exception	: yes
  cpuid level	: 20
  wp		: yes
  flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb invpcid_single pti ssbd ibrs ibpb stibp tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap intel_pt xsaveopt dtherm ida arat pln pts flush_l1d
  bugs		: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass l1tf
  bogomips	: 3199.88
  clflush size	: 64
  cache_alignment	: 64
  address sizes	: 39 bits physical, 48 bits virtual
  power management:
  }
