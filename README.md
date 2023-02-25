# Aufgabenstellung

Systemaufrufe werden üblicherweise als Softwareinterrupt realisiert. Dia aufzurufende Behandlungsroutine wird durch eine eindeutige Nummer in der System Call Table identifiziert.

Bis jetzt haben Sie alle Systemaufrufe mithilfe von Methoden aus der C-Bibliothek aufgerufen. Jedoch existieren nicht für alle Systemaufrufe passende Bibliotheksfunktionen. In diesem Fall kann man Systemaufrufe selber mit der Methode syscall ausführen. Diese abstrahiert den platformspezifischen Assemblercode zum Auflösen eines Syscalls und stellt die CPU-Register nach Beendigung des Systemaufrufs wieder her.

Um die Laufzeitunterschiede zwischen der Benutzung der C-Bibliothek und der Benutzung des Systemaufrufs mittels syscall am Beispiel von gettimeofday zu vergleichen, schreiben Sie zwei C-Programme, die jeweils den entsprechenden Aufruf enthalten. Wiederholen Sie den entsprechenden Aufruf in einer Schleife 10.000.000 Mal um einen messbaren Unterschied festzustellen.
