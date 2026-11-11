# Electricity Bill Flowchart

```mermaid
flowchart TD
    A([START]) --> B[/Input electricity units/]
    B --> C{Are units <= 50?}
    C -->|Yes| D[Energy = Units * 1.50]
    C -->|No| E[Energy = 50 * 1.50 + (Units - 50) * 2.00]
    D --> F[Service charge = 10.00]
    E --> F
    F --> G[Total bill = Energy + Service charge]
    G --> H[/Display energy charge, service charge and total bill/]
    H --> I([END])
