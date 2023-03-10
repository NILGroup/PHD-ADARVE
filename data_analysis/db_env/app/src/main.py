from reports.ReportGenerator import ReportGenerator
from objects.experiments.Experiment import Experiment


def markdown_manage():
    report = ReportGenerator("../data", "clients.json", "./results", "user_report", {})
    report.generate_report()

def main():
    experiment = Experiment()
    
    experiment.set_users_data()
    experiment.analyse_users()
    experiment.set_global_data()
    experiment.analyse_global()
    experiment.export_results()

if __name__ == "__main__":
    main()